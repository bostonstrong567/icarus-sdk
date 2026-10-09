// /Script/Engine.NavAgentProperties
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h

USTRUCT()
struct FNavAgentProperties : public FMovementProperties
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AgentRadius;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AgentHeight;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AgentStepHeight;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavWalkingSearchHeightScale;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoftClassPath PreferredNavData;  // 0x0018, size 0x18
};
