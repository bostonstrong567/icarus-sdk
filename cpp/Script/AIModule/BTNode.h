// /Script/AIModule.BTNode
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTNode.h

UCLASS(Abstract, Config=Game)
class UBTNode : public UObject, public IGameplayTaskOwnerInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FString NodeName;  // 0x0030, size 0x10
protected:
    uint8 : 1 bCreateNodeInstance;  // 0x0055, not reflected
    uint8 : 1 bOwnsGameplayTasks;  // 0x0055, not reflected
private:
    UPROPERTY() UBehaviorTree* TreeAsset;  // 0x0040, size 0x8
    UPROPERTY() UBTCompositeNode* ParentNode;  // 0x0048, size 0x8
    uint16 ExecutionIndex;  // 0x0050, not reflected
    uint16 MemoryOffset;  // 0x0052, not reflected
    uint8 TreeDepth;  // 0x0054, not reflected
    uint8 : 1 bIsInjected;  // 0x0055, not reflected
    uint8 : 1 bIsInstanced;  // 0x0055, not reflected

    // Virtual functions that start here:
    //   CleanupMemory, DescribeRuntimeValues, GetInstanceMemorySize, GetSpecialMemorySize
    //   GetStaticDescription, InitializeFromAsset, InitializeMemory, OnInstanceCreated, OnInstanceDestroyed
    //   SetOwner
};
