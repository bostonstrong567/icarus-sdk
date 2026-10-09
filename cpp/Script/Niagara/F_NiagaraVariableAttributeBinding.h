// /Script/Niagara.NiagaraVariableAttributeBinding
// size 0x58, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraVariableAttributeBinding
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FNiagaraVariableBase ParamMapVariable;  // 0x0000, size 0xC
    UPROPERTY() FNiagaraVariable DataSetVariable;  // 0x0010, size 0x20
    UPROPERTY() FNiagaraVariable RootVariable;  // 0x0030, size 0x20
    UPROPERTY() TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;  // 0x0050, size 0x1
    UPROPERTY() uint8 bBindingExistsOnSource : 1;  // 0x0054, mask 0x01
    UPROPERTY() uint8 bIsCachedParticleValue : 1;  // 0x0054, mask 0x02
};
