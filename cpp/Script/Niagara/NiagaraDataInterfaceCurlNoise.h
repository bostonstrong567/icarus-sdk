// /Script/Niagara.NiagaraDataInterfaceCurlNoise
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCurlNoise.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) uint32 Seed;  // 0x0038, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FVector OffsetFromSeed;  // 0x003C
};
