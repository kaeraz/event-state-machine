import os
import subprocess as sp
import pymakefile_user as user


def run_cmd(cmd):
    # Flatten the cmd argumet list
    flat_cmd = []
    for sub in cmd:
        if isinstance(sub, list):
            for item in sub:
                flat_cmd.append(item)
        else:
            flat_cmd.append(sub)
    result = sp.run(flat_cmd,
                    stdout=sp.PIPE,
                    stderr=sp.PIPE,
                    encoding='utf-8')
    print(' '.join(flat_cmd))
    if str(result.stdout).strip() != '':
        print(f'{result.stdout}')
    if str(result.stderr).strip() != '':
        print(f'STDERR: {result.stderr}')


# Remove output directory
run_cmd(['rm', '-f', user.OUTPUT_DIR])
# Run compilator for each source file
for srcfile in user.SOURCE_FILES:
    outdir = os.path.join(user.OUTPUT_DIR, os.path.dirname(srcfile)).replace('/', '\\')
    outfilename = os.path.splitext(srcfile)[0] + '.o'
    outpath = os.path.join(outdir, outfilename)
    run_cmd(['mkdir', outdir])
    run_cmd([user.CPP, user.CPP_FLAGS, srcfile, '-o', outpath])
