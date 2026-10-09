// /Script/AIModule.EQSTestingPawn
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x550, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EQSTestingPawn.h

UCLASS(Abstract, Config=Game)
class AEQSTestingPawn : public ACharacter, public IEQSQueryResultSourceInterface
{
public:
    UPROPERTY(EditAnywhere) UEnvQuery* QueryTemplate;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere) TArray<FEnvNamedValue> QueryParams;  // 0x04C8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FAIDynamicParam> QueryConfig;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere) float TimeLimitPerStep;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere) int32 StepToDebugDraw;  // 0x04EC, size 0x4
    UPROPERTY(EditAnywhere) EEnvQueryHightlightMode HighlightMode;  // 0x04F0, size 0x1
    UPROPERTY(EditAnywhere) uint8 bDrawLabels : 1;  // 0x04F4, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bDrawFailedItems : 1;  // 0x04F4, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bReRunQueryOnlyOnFinishedMove : 1;  // 0x04F4, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bShouldBeVisibleInGame : 1;  // 0x04F4, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bTickDuringGame : 1;  // 0x04F4, mask 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryRunMode> QueryingMode;  // 0x04F8, size 0x1
    UPROPERTY(EditAnywhere) FNavAgentProperties NavAgentProperties;  // 0x0500, size 0x30
protected:
    TSharedPtr<FEnvQueryInstance,0> QueryInstance;  // 0x0530, not reflected
    TArray<FEnvQueryInstance,TSizedDefaultAllocator<32> > StepResults;  // 0x0540, not reflected
};
