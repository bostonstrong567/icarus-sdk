// /Script/Icarus.VirtualStats
// Derives from: UObject
// size 0xB0, declared in Icarus/Source/Icarus/Stats/VirtualStats.h

UCLASS()
class UVirtualStats : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    std::unordered_map<enum EStats,UVirtualStats::FVirtualStatInfo,std::hash<enum EStats>,std::equal_to<enum EStats>,std::allocator<std::pair<enum EStats const ,UVirtualStats::FVirtualStatInfo> > > VirtualStatCalculators;  // 0x0028, private
    std::unordered_map<enum EStats,TArray<enum EStats,TSizedDefaultAllocator<32> >,std::hash<enum EStats>,std::equal_to<enum EStats>,std::allocator<std::pair<enum EStats const ,TArray<enum EStats,TSizedDefaultAllocator<32> > > > > ReverseLookup;  // 0x0068, private
    bool bModifyingVirtualStats;  // 0x00A8, private
};
