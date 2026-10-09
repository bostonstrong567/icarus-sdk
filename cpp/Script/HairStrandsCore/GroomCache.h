// /Script/HairStrandsCore.GroomCache
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCache.h

UCLASS()
class UGroomCache : public UObject, public IInterface_AssetUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FGroomCacheInfo GroomCacheInfo;  // 0x0030, size 0x28
    TArray<FGroomCacheChunk,TSizedDefaultAllocator<32> > Chunks;  // 0x0058, not reflected
};
