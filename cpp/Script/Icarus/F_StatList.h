// /Script/Icarus.StatList
// size 0x10, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FStatList
{
private:
    TArray<TTuple<enum EStats,int>,TSizedDefaultAllocator<32> > Stats;  // 0x0000, not reflected
};
