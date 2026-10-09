// /Script/MovieScene.MovieSceneEntitySystemGraph
// size 0x138, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h

USTRUCT()
struct FMovieSceneEntitySystemGraph
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    TArray<unsigned short,TInlineAllocator<4,TSizedDefaultAllocator<32> > > SpawnPhase;  // 0x0000, not reflected
    TArray<unsigned short,TInlineAllocator<8,TSizedDefaultAllocator<32> > > InstantiationPhase;  // 0x0018, not reflected
    TArray<unsigned short,TInlineAllocator<16,TSizedDefaultAllocator<32> > > EvaluationPhase;  // 0x0038, not reflected
    TArray<unsigned short,TInlineAllocator<2,TSizedDefaultAllocator<32> > > FinalizationPhase;  // 0x0068, not reflected
    UPROPERTY() FMovieSceneEntitySystemGraphNodes Nodes;  // 0x0080, size 0x38
    FMovieSceneEntitySystemDirectedGraph FlowGraph;  // 0x00B8, not reflected
    FMovieSceneEntitySystemDirectedGraph ReferenceGraph;  // 0x00F0, not reflected
    uint32 SerialNumber;  // 0x0128, not reflected
    uint32 PreviousSerialNumber;  // 0x012C, not reflected
    uint32 ReentrancyGuard;  // 0x0130, not reflected
};
