// /Script/HairStrandsCore.GroomCache
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCache.h

UCLASS()
class UGroomCache : public UObject, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere) FGroomCacheInfo GroomCacheInfo;  // 0x0030, size 0x28

    // Not reflected: the engine's scripting cannot see these.
    TArray<FGroomCacheChunk,TSizedDefaultAllocator<32> > Chunks;  // 0x0058, protected
};
