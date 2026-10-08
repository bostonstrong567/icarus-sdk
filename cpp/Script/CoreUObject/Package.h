// /Script/CoreUObject.Package
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Package.h

UCLASS()
class UPackage : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bDirty;  // 0x0028, private
    uint8 : 1 bHasBeenFullyLoaded;  // 0x0028
    uint8 : 1 bCanBeImported;  // 0x0028
    float LoadTime;  // 0x002C, private
    FGuid Guid;  // 0x0030, private
    TArray<int,TSizedDefaultAllocator<32> > ChunkIDs;  // 0x0040, private
    uint32 PackageFlagsPrivate;  // 0x0050, private
    FPackageId PackageId;  // 0x0058, private
    int32 PIEInstanceID;  // 0x0060
    FName FileName;  // 0x0064
    FLinkerLoad * LinkerLoad;  // 0x0070
    int32 LinkerPackageVersion;  // 0x0078
    int32 LinkerLicenseeVersion;  // 0x007C
    FCustomVersionContainer LinkerCustomVersion;  // 0x0080
    uint64 FileSize;  // 0x0090
    TUniquePtr<FWorldTileInfo,TDefaultDelete<FWorldTileInfo> > WorldTileInfo;  // 0x0098
};
