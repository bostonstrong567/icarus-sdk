// /Script/AIModule.AISenseEvent_Damage
// Derives from: UAISenseEvent > UObject
// size 0x60, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseEvent_Damage.h

UCLASS(EditInlineNew)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIDamageEvent Event;  // 0x0028, size 0x38
};
