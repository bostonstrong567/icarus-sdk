// /Script/Niagara.NiagaraPlatformSetConflictInfo
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h

USTRUCT()
struct FNiagaraPlatformSetConflictInfo
{
public:
    UPROPERTY() int32 SetAIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 SetBIndex;  // 0x0004, size 0x4
    UPROPERTY() TArray<FNiagaraPlatformSetConflictEntry> Conflicts;  // 0x0008, size 0x10
};
