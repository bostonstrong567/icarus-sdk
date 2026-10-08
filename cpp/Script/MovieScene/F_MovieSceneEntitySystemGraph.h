// /Script/MovieScene.MovieSceneEntitySystemGraph
// size 0x138, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h

USTRUCT()
struct FMovieSceneEntitySystemGraph
{
    UPROPERTY() FMovieSceneEntitySystemGraphNodes Nodes;  // 0x0080, size 0x38

    // Not reflected:
    TArray<unsigned short,TInlineAllocator<4,TSizedDefaultAllocator<32> > > SpawnPhase;  // 0x0000
    TArray<unsigned short,TInlineAllocator<8,TSizedDefaultAllocator<32> > > InstantiationPhase;  // 0x0018
    TArray<unsigned short,TInlineAllocator<16,TSizedDefaultAllocator<32> > > EvaluationPhase;  // 0x0038
    TArray<unsigned short,TInlineAllocator<2,TSizedDefaultAllocator<32> > > FinalizationPhase;  // 0x0068
    FMovieSceneEntitySystemDirectedGraph FlowGraph;  // 0x00B8
    FMovieSceneEntitySystemDirectedGraph ReferenceGraph;  // 0x00F0
    uint32 SerialNumber;  // 0x0128
    uint32 PreviousSerialNumber;  // 0x012C
    uint32 ReentrancyGuard;  // 0x0130
};
