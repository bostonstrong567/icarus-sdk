// /Script/Icarus.IcarusGraphicsExtraInfo
// size 0x48, declared in Icarus/Source/Icarus/Systems/Settings/GraphicsTier.h

USTRUCT()
struct FIcarusGraphicsExtraInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString GPUDeviceName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 GPUDedicatedMemoryGb;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 GPUDedicatedSystemMemoryGb;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 GPUSharedSystemMemoryGb;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString CPUVendorName;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString CPUDeviceName;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CPUCoreCount;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CPUPhysicalMemoryGb;  // 0x0044, size 0x4
};
