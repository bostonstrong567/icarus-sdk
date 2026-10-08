// /Script/Niagara.NiagaraModuleDependency
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h

USTRUCT()
struct FNiagaraModuleDependency
{
    UPROPERTY(EditAnywhere) FName Id;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraModuleDependencyType Type;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraModuleDependencyScriptConstraint ScriptConstraint;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere) FText Description;  // 0x0010, size 0x18
};
