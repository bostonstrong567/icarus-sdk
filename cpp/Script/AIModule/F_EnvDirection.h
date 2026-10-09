// /Script/AIModule.EnvDirection
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEnvDirection
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> LineFrom;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> LineTo;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Rotation;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvDirection> DirMode;  // 0x0018, size 0x1
};
