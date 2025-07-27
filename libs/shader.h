//shader.h
//praise to the Lord Jeus Christ he is king!

#ifndef SHADER_H
#define SHADER_H

typedef struct shader_s{
      shader_s* current;
      shader_s prev;

      bool bTransparent;
      int shaderid;

      char SHADER_PATH[2048];

      const char* ShaderName;

      int shaderflags;

      bool bFill;
}shader_t;

#endif
