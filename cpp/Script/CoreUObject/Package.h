// /Script/CoreUObject.Package
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Package.h

UCLASS()
class UPackage : public UObject
{
public:
    uint8 : 1 bCanBeImported;  // 0x0028, not reflected
    uint8 : 1 bHasBeenFullyLoaded;  // 0x0028, not reflected
    int32 PIEInstanceID;  // 0x0060, not reflected
    FName FileName;  // 0x0064, not reflected
    FLinkerLoad * LinkerLoad;  // 0x0070, not reflected
    int32 LinkerPackageVersion;  // 0x0078, not reflected
    int32 LinkerLicenseeVersion;  // 0x007C, not reflected
    FCustomVersionContainer LinkerCustomVersion;  // 0x0080, not reflected
    uint64 FileSize;  // 0x0090, not reflected
    TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo> > WorldTileInfo;  // 0x0098, not reflected
private:
    uint8 : 1 bDirty;  // 0x0028, not reflected
    float LoadTime;  // 0x002C, not reflected
    FGuid Guid;  // 0x0030, not reflected
    TArray<int,TSizedDefaultAllocator<32> > ChunkIDs;  // 0x0040, not reflected
    uint32 PackageFlagsPrivate;  // 0x0050, not reflected
    FPackageId PackageId;  // 0x0058, not reflected
};
