// /Script/AIModule.EnvQueryNode
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h

UCLASS(Abstract)
class UEnvQueryNode : public UObject
{
public:
    UPROPERTY() int32 VerNum;  // 0x0028, size 0x4

    // Virtual functions that start here:
    //   GetDescriptionDetails, GetDescriptionTitle, UpdateNodeVersion
};
