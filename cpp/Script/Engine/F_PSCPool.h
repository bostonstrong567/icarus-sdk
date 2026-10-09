// /Script/Engine.PSCPool
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/WorldPSCPool.h

USTRUCT()
struct FPSCPool
{
public:
    UPROPERTY(Transient) TArray<FPSCPoolElem> FreeElements;  // 0x0000, size 0x10
};
