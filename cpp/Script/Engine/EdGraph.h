// /Script/Engine.EdGraph
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraph.h

UCLASS()
class UEdGraph : public UObject
{
public:
    UPROPERTY() TSubclassOf<UEdGraphSchema> Schema;  // 0x0028, size 0x8
    UPROPERTY() TArray<UEdGraphNode*> Nodes;  // 0x0030, size 0x10
    UPROPERTY() uint8 bEditable : 1;  // 0x0040, mask 0x01
    UPROPERTY() uint8 bAllowDeletion : 1;  // 0x0040, mask 0x02
    UPROPERTY() uint8 bAllowRenaming : 1;  // 0x0040, mask 0x04

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(FEdGraphEditAction const &),FDefaultDelegateUserPolicy> OnGraphChanged;  // 0x0048, private

    // Virtual functions that start here:
    //   NotifyGraphChanged
};
