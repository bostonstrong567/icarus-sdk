// /Script/Engine.DebuggingInfoForSingleFunction
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h

USTRUCT()
struct FDebuggingInfoForSingleFunction
{

    // Not reflected:
    TMap<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,0> > LineNumberToSourceNodeMap;  // 0x0000
    TMap<int,FEdGraphPinReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FEdGraphPinReference,0> > LineNumberToSourcePinMap;  // 0x0050
    TMultiMap<FEdGraphPinReference,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEdGraphPinReference,int,1> > SourcePinToLineNumbersMap;  // 0x00A0
    TMap<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FInt32Range,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,FInt32Range,0> > PureNodeScriptCodeRangeMap;  // 0x00F0
    TMap<int,TArray<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,0> > LineNumberToTunnelInstanceSourceNodesMap;  // 0x0140
};
