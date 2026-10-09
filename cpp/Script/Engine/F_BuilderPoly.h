// /Script/Engine.BuilderPoly
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/BrushBuilder.h

USTRUCT()
struct FBuilderPoly
{
public:
    UPROPERTY() TArray<int32> VertexIndices;  // 0x0000, size 0x10
    UPROPERTY() int32 Direction;  // 0x0010, size 0x4
    UPROPERTY() FName ItemName;  // 0x0014, size 0x8
    UPROPERTY() int32 PolyFlags;  // 0x001C, size 0x4
};
