// /Script/AIModule.BTService_RunEQS
// Derives from: UBTService_BlackboardBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_RunEQS.h

UCLASS()
class UBTService_RunEQS : public UBTService_BlackboardBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x0098, size 0x48
    TDelegate<void __cdecl(TSharedPtr<FEnvQueryResult,0>),FDefaultDelegateUserPolicy> QueryFinishedDelegate;  // 0x00E0, not reflected
};
