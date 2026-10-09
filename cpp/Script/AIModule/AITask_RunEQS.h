// /Script/AIModule.AITask_RunEQS
// Derives from: UAITask > UGameplayTask > UObject
// size 0xE8, declared in Engine/Source/Runtime/AIModule/Classes/Tasks/AITask_RunEQS.h

UCLASS(Config=Game)
class UAITask_RunEQS : public UAITask
{
protected:
    FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x0070, not reflected
    TDelegate<void __cdecl(TSharedPtr<FEnvQueryResult,0>),FDefaultDelegateUserPolicy> EQSFinishedDelegate;  // 0x00B8, not reflected
    TDelegate<void __cdecl(TSharedPtr<FEnvQueryResult,0>),FDefaultDelegateUserPolicy> NotificationDelegate;  // 0x00C8, not reflected
    TSharedPtr<FEnvQueryResult,0> QueryResult;  // 0x00D8, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);  // parameters 0x18
};
