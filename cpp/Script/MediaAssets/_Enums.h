// /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
UENUM()
enum class EMediaAudioCaptureDeviceFilter : uint8
{
    None = 0,
    Card = 1,
    Microphone = 2,
    Software = 4,
    Unknown = 8,
};

// /Script/MediaAssets.EMediaPlayerTrack
UENUM()
enum class EMediaPlayerTrack : uint8
{
    Audio = 0,
    Caption = 1,
    Metadata = 2,
    Script = 3,
    Subtitle = 4,
    Text = 5,
    Video = 6,
};

// /Script/MediaAssets.EMediaSoundChannels
UENUM()
enum class EMediaSoundChannels : int32
{
    Mono = 0,
    Stereo = 1,
    Surround = 2,
};

// /Script/MediaAssets.EMediaSoundComponentFFTSize
UENUM()
enum class EMediaSoundComponentFFTSize : uint8
{
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
};

// /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
UENUM()
enum class EMediaVideoCaptureDeviceFilter : uint8
{
    None = 0,
    Card = 1,
    Software = 2,
    Unknown = 4,
    Webcam = 8,
};

// /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
UENUM()
enum class EMediaWebcamCaptureDeviceFilter : uint8
{
    None = 0,
    DepthSensor = 1,
    Front = 2,
    Rear = 4,
    Unknown = 8,
};

// /Script/MediaAssets.MediaTextureOrientation
UENUM()
enum class MediaTextureOrientation : int32
{
    MTORI_Original = 0,
    MTORI_CW90 = 1,
    MTORI_CW180 = 2,
    MTORI_CW270 = 3,
};

// /Script/MediaAssets.MediaTextureOutputFormat
UENUM()
enum class MediaTextureOutputFormat : int32
{
    MTOF_Default = 0,
    MTOF_SRGB_LINOUT = 1,
    MTOF_MAX = 2,
};
