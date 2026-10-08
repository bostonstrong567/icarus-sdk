// /Script/AIModule.PawnAction_Wait
// Derives from: UPawnAction > UObject
// size 0xA0, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction_Wait.h

UCLASS(EditInlineNew)
class UPawnAction_Wait : public UPawnAction
{
public:
    UPROPERTY() float TimeToWait;  // 0x0090, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    float FinishTimeStamp;  // 0x0094
    FTimerHandle TimerHandle;  // 0x0098
};
