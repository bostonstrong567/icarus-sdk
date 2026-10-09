// /Script/Niagara.NiagaraGraphViewSettings
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraEditorDataBase.h

USTRUCT()
struct FNiagaraGraphViewSettings
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FVector2D Location;  // 0x0000, size 0x8
    UPROPERTY() float Zoom;  // 0x0008, size 0x4
    UPROPERTY() bool bIsValid;  // 0x000C, size 0x1
};
