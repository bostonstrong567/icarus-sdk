// /Script/Engine.DropNoteInfo
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FDropNoteInfo
{
    UPROPERTY() FVector Location;  // 0x0000, size 0xC
    UPROPERTY() FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY() FString Comment;  // 0x0018, size 0x10
};
