// /Script/Niagara.NiagaraPrecompileContainer
// Derives from: UObject
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/NiagaraPrecompileContainer.h

UCLASS()
class UNiagaraPrecompileContainer : public UObject
{
public:
    UPROPERTY() TArray<UNiagaraScript*> Scripts;  // 0x0028, size 0x10
    UPROPERTY() UNiagaraSystem* System;  // 0x0038, size 0x8
};
