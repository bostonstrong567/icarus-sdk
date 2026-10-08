// /Script/Icarus.StateRecorderBlob
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusStateRecorderComponent.generated.h

USTRUCT()
struct FStateRecorderBlob
{
    UPROPERTY() FString ComponentClassName;  // 0x0000, size 0x10
    UPROPERTY() TArray<uint8> BinaryData;  // 0x0010, size 0x10
};
