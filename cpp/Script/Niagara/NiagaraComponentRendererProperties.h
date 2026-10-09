// /Script/Niagara.NiagaraComponentRendererProperties
// Derives from: UNiagaraRendererProperties > UNiagaraMergeable > UObject
// size 0x1B0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentRendererProperties.h

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<USceneComponent> ComponentType;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) uint32 ComponentCountLimit;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding EnabledBinding;  // 0x0088, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x00E0, size 0x58
    UPROPERTY(EditAnywhere) bool bAssignComponentsOnParticleID;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere) bool bOnlyCreateComponentsOnParticleSpawn;  // 0x0139, size 0x1
    UPROPERTY(EditAnywhere) int32 RendererVisibility;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* TemplateComponent;  // 0x0140, size 0x8
    UPROPERTY() TArray<FNiagaraComponentPropertyBinding> PropertyBindings;  // 0x0148, size 0x10
    TMap<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0> > SetterFunctionMapping;  // 0x0158, not reflected
private:
    const UNiagaraEmitter * EmitterPtr;  // 0x01A8, not reflected
};
