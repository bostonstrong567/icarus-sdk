// /Script/AIModule.AISense
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense.h

UCLASS(Abstract, Config=Engine)
class UAISense : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float DefaultExpirationAge;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) EAISenseNotifyType NotifyType;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) uint8 bWantsNewPawnNotification : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) uint8 bAutoRegisterAllPawnsAsSources : 1;  // 0x0030, mask 0x02
    UPROPERTY() UAIPerceptionSystem* PerceptionSystemInstance;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bNeedsForgettingNotification;  // 0x0030, protected
    float TimeUntilNextUpdate;  // 0x0040, private
    FAINamedID<FAISenseCounter> SenseID;  // 0x0044, private
    TDelegate<void __cdecl(FPerceptionListener const &),FDefaultDelegateUserPolicy> OnNewListenerDelegate;  // 0x0050, protected
    TDelegate<void __cdecl(FPerceptionListener const &),FDefaultDelegateUserPolicy> OnListenerUpdateDelegate;  // 0x0060, protected
    TDelegate<void __cdecl(FPerceptionListener const &),FDefaultDelegateUserPolicy> OnListenerRemovedDelegate;  // 0x0070, protected

    // Virtual functions that start here:
    //   CleanseInvalidSources, GetDebugLegend, OnListenerConfigUpdated, OnListenerForgetsActor
    //   OnListenerForgetsAll, OnNewPawn, RegisterSource, RegisterWrappedEvent, UnregisterSource, Update
    //   UpdateSenseID
};
