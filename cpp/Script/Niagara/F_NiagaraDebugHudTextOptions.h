// /Script/Niagara.NiagaraDebugHudTextOptions
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraDebugHudTextOptions
{
public:
    UPROPERTY(EditAnywhere, Config) ENiagaraDebugHudFont Font;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraDebugHudHAlign HorizontalAlignment;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraDebugHudVAlign VerticalAlignment;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere) FVector2D ScreenOffset;  // 0x0008, size 0x8
};
