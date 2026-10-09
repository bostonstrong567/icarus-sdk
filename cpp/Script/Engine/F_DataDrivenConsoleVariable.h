// /Script/Engine.DataDrivenConsoleVariable
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/DataDrivenCVars/DataDrivenCVars.h

USTRUCT()
struct FDataDrivenConsoleVariable
{
public:
    UPROPERTY(EditAnywhere, Config) FDataDrivenCVarType Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Config) FString Name;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ToolTip;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, Config) float DefaultValueFloat;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 DefaultValueInt;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config) bool DefaultValueBool;  // 0x0030, size 0x1
    FString ShadowName;  // 0x0038, not reflected
    FDataDrivenCVarType ShadowType;  // 0x0048, not reflected
};
