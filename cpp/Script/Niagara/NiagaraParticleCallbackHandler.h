// /Script/Niagara.NiagaraParticleCallbackHandler
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceExport.h

UCLASS(Abstract)
class UNiagaraParticleCallbackHandler : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ReceiveParticleData(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);  // parameters 0x18
};
