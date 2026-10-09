// /Script/AIModule.AISenseEvent_Hearing
// Derives from: UAISenseEvent > UObject
// size 0x58, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseEvent_Hearing.h

UCLASS(EditInlineNew)
class UAISenseEvent_Hearing : public UAISenseEvent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAINoiseEvent Event;  // 0x0028, size 0x30
};
