// /Script/Engine.EdGraphPinReference
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h

USTRUCT()
struct FEdGraphPinReference
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TWeakObjectPtr<UEdGraphNode> OwningNode;  // 0x0000, size 0x8
    UPROPERTY() FGuid PinId;  // 0x0008, size 0x10
};
