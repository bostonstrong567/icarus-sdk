// /Script/Engine.Polys
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Polys.h

UCLASS(MinimalAPI)
class UPolys : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FPoly,TSizedDefaultAllocator<32> > Element;  // 0x0028
};
