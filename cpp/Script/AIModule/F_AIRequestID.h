// /Script/AIModule.AIRequestID
// size 0x4, declared in Engine/Source/Runtime/AIModule/Classes/AITypes.h

USTRUCT()
struct FAIRequestID
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() uint32 RequestID;  // 0x0000, size 0x4
};
