// /Script/Engine.SimpleConstructionScript
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/SimpleConstructionScript.h

UCLASS(MinimalAPI)
class USimpleConstructionScript : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<USCS_Node*> RootNodes;  // 0x0028, size 0x10
    UPROPERTY() TArray<USCS_Node*> AllNodes;  // 0x0038, size 0x10
    UPROPERTY() USCS_Node* DefaultSceneRootNode;  // 0x0048, size 0x8
    TMap<FName,USCS_Node *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USCS_Node *,0> > NameToSCSNodeMap;  // 0x0050, not reflected
};
