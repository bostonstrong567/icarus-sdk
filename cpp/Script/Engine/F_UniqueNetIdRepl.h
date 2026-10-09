// /Script/Engine.UniqueNetIdRepl
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h

USTRUCT()
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) TArray<uint8> ReplicationBytes;  // 0x0018, size 0x10
};
