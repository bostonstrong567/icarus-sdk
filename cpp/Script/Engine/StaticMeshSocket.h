// /Script/Engine.StaticMeshSocket
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMeshSocket.h

UCLASS(MinimalAPI)
class UStaticMeshSocket : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) FName SocketName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeLocation;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator RelativeRotation;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeScale;  // 0x0048, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Tag;  // 0x0058, size 0x10
};
