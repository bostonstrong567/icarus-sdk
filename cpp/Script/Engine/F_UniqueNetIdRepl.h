// /Script/Engine.UniqueNetIdRepl
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h

USTRUCT()
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
    UPROPERTY(Transient) TArray<uint8> ReplicationBytes;  // 0x0018, size 0x10
};
