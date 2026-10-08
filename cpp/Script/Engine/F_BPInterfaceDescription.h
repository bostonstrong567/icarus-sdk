// /Script/Engine.BPInterfaceDescription
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FBPInterfaceDescription
{
    UPROPERTY() TSubclassOf<UInterface> Interface;  // 0x0000, size 0x8
    UPROPERTY() TArray<UEdGraph*> Graphs;  // 0x0008, size 0x10
};
