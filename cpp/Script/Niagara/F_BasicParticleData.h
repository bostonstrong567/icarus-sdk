// /Script/Niagara.BasicParticleData
// size 0x1C, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceExport.h

USTRUCT()
struct FBasicParticleData
{
    UPROPERTY(BlueprintReadOnly) FVector Position;  // 0x0000, size 0xC
    UPROPERTY(BlueprintReadOnly) float Size;  // 0x000C, size 0x4
    UPROPERTY(BlueprintReadOnly) FVector Velocity;  // 0x0010, size 0xC
};
