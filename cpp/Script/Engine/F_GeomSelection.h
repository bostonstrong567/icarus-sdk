// /Script/Engine.GeomSelection
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/Brush.h

USTRUCT()
struct FGeomSelection
{
public:
    UPROPERTY() int32 Type;  // 0x0000, size 0x4
    UPROPERTY() int32 Index;  // 0x0004, size 0x4
    UPROPERTY() int32 SelectionIndex;  // 0x0008, size 0x4
};
