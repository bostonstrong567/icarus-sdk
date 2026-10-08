// /Script/AIModule.BTService_RunEQS
// Derives from: UBTService_BlackboardBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_RunEQS.h

UCLASS()
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere) FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x0098, size 0x48

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(TSharedPtr<FEnvQueryResult,0>),FDefaultDelegateUserPolicy> QueryFinishedDelegate;  // 0x00E0, protected
};
