// /Script/Niagara.NiagaraAssetVersion
// size 0x1C, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraAssetVersion
{
    UPROPERTY(EditAnywhere) int32 MajorVersion;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 MinorVersion;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FGuid VersionGuid;  // 0x0008, size 0x10
    UPROPERTY() bool bIsVisibleInVersionSelector;  // 0x0018, size 0x1
};
