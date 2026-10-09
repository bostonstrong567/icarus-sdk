// /Script/AIModule.BTTask_RunEQSQuery
// Derives from: UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0x150, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h

UCLASS()
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere) UEnvQuery* QueryTemplate;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) TArray<FEnvNamedValue> QueryParams;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) TArray<FAIDynamicParam> QueryConfig;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere) FBlackboardKeySelector EQSQueryBlackboardKey;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere) bool bUseBBKey;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere) FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x00F8, size 0x48
    TDelegate<void __cdecl(TSharedPtr<FEnvQueryResult,0>),FDefaultDelegateUserPolicy> QueryFinishedDelegate;  // 0x0140, not reflected
};
