// /Game/BP/World/OverlapSignature.OverlapSignature
// size 0xA8

USTRUCT()
struct OverlapSignature
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* OverlappedComponent;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OtherActor;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* OtherComp;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OtherBodyIndex;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FromSweep;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult SweepResults;  // 0x0020, size 0x88
};
