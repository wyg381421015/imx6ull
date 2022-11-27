cmd_sound/core/modules.order := {   echo sound/core/snd-hwdep.ko; :; } | awk '!x[$$0]++' - > sound/core/modules.order
